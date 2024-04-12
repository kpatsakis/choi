void fun()
{
  int entity_8 = 67;
  int entity_0 = 25;
  char* entity_2;
  char entity_3[58] = "";
  entity_3 = NULL;
  entity_2 = (char*)malloc(entity_8*sizeof(char));
  entity_2[entity_8-1]='';
  memset(entity_3, 'L', 58-1);
  entity_3[58-1]='';
  memcpy(entity_2, entity_3, 58*sizeof(char));
}