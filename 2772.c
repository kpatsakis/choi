void fun()
{
  int entity_3 = 25;
  entity_3 = 19;
  char* entity_9;
  char entity_5[entity_3] = "";
  entity_5 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(62*sizeof(char));
  entity_8[62-1]='';
  entity_9 = (char*)malloc(12*sizeof(char));
  entity_9[12-1]='';
  memset(entity_5, 'A', entity_3-1);
  entity_5[entity_3-1]='';
  memcpy(entity_9, entity_5, entity_3*sizeof(char));
}