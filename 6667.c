void fun()
{
  int entity_9 = 83;
  entity_9 = 83;
  char* entity_6;
  char entity_2 = 'C';
  char entity_8[52] = "";
  entity_8 = NULL;
  char entity_4[entity_9] = "";
  entity_4 = NULL;
  char* entity_0;
  memset(entity_4, 'j', entity_9-1);
  entity_4[entity_9-1]='';
  entity_0 = (char*)malloc(17*sizeof(char));
  entity_0[17-1]='';
  memset(entity_8, 'o', 52-1);
  entity_8[52-1]='';
  entity_6 = (char*)malloc(89*sizeof(char));
  entity_6[89-1]='';
  strcpy(entity_0, entity_4);
}