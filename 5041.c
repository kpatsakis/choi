void fun()
{
  int entity_9 = 29;
  char* entity_8;
  char entity_3[13] = "";
  entity_3 = NULL;
  char* entity_6;
  entity_8 = (char*)malloc(62*sizeof(char));
  entity_8[62-1]='';
  entity_6 = (char*)malloc(entity_9*sizeof(char));
  entity_6[entity_9-1]='';
  memset(entity_3, 'y', 13-1);
  entity_3[13-1]='';
  memcpy(entity_6, entity_3, 13*sizeof(char));
}