void fun()
{
  int entity_3 = 96;
  int entity_9 = 60;
  char entity_6[83] = "";
  entity_6 = NULL;
  char* entity_8;
  char entity_5 = 'D';
  char* entity_0;
  memset(entity_6, 'a', 83-1);
  entity_6[83-1]='';
  entity_8 = (char*)malloc(entity_9*sizeof(char));
  entity_8[entity_9-1]='';
  entity_0 = (char*)malloc(16*sizeof(char));
  entity_0[16-1]='';
  strcpy(entity_8, entity_6);
}