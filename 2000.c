void fun()
{
  int entity_9 = 99;
  char* entity_4;
  char entity_3[entity_9] = "";
  entity_3 = NULL;
  char entity_5 = 'p';
  char* entity_0;
  entity_4 = (char*)malloc(68*sizeof(char));
  entity_4[68-1]='';
  memset(entity_3, 'O', entity_9-1);
  entity_3[entity_9-1]='';
  entity_0 = (char*)malloc(62*sizeof(char));
  entity_0[62-1]='';
  entity_9 = 33;
  memcpy(entity_0, entity_3, entity_9*sizeof(char));
}