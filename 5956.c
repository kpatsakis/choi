void fun()
{
  int entity_8 = 90;
  char entity_4[98] = "";
  entity_4 = NULL;
  char* entity_1;
  char* entity_5;
  entity_1 = (char*)malloc(entity_8*sizeof(char));
  entity_1[entity_8-1]='';
  entity_5 = (char*)malloc(67*sizeof(char));
  entity_5[67-1]='';
  memset(entity_4, 'C', 98-1);
  entity_4[98-1]='';
  memcpy(entity_1, entity_4, 98*sizeof(char));
}