void fun()
{
  int entity_2 = 65;
  char entity_3[entity_2] = "";
  entity_3 = NULL;
  char* entity_6;
  memset(entity_3, 'W', entity_2-1);
  entity_3[entity_2-1]='';
  entity_6 = (char*)malloc(24*sizeof(char));
  entity_6[24-1]='';
  entity_2 = 51;
  memcpy(entity_6, entity_3, entity_2*sizeof(char));
}