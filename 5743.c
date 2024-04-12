void fun()
{
  int entity_7 = 61;
  int entity_0 = 100;
  char entity_1[entity_0] = "";
  entity_1 = NULL;
  char* entity_9;
  char entity_8 = 'x';
  char* entity_2;
  memset(entity_1, 'C', entity_0-1);
  entity_1[entity_0-1]='';
  entity_2 = (char*)malloc(13*sizeof(char));
  entity_2[13-1]='';
  entity_9 = (char*)malloc(39*sizeof(char));
  entity_9[39-1]='';
  entity_0 = 28;
  strcpy(entity_2, entity_1);
}