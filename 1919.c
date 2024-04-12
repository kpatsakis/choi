void fun()
{
  int entity_7 = 79;
  int entity_6 = 58;
  char* entity_8;
  char entity_5[78] = "";
  entity_5 = NULL;
  memset(entity_5, 'C', 78-1);
  entity_5[78-1]='';
  entity_8 = (char*)malloc(entity_7*sizeof(char));
  entity_8[entity_7-1]='';
  entity_7 = 79;
  memcpy(entity_8, entity_5, 78*sizeof(char));
}