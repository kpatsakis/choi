void fun()
{
  int entity_6 = 85;
  int entity_9 = 67;
  char entity_7 = 'k';
  char entity_8[49] = "";
  entity_8 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(entity_6*sizeof(char));
  entity_3[entity_6-1]='';
  memset(entity_8, 'M', 49-1);
  entity_8[49-1]='';
  memcpy(entity_3, entity_8, 49*sizeof(char));
}