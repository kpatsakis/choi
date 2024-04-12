void fun()
{
  int entity_4 = 18;
  entity_4 = 12;
  char entity_3[37] = "";
  entity_3 = NULL;
  char* entity_9;
  memset(entity_3, 'g', 37-1);
  entity_3[37-1]='';
  entity_9 = (char*)malloc(entity_4*sizeof(char));
  entity_9[entity_4-1]='';
  memcpy(entity_9, entity_3, 37*sizeof(char));
}