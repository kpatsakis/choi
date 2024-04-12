void fun()
{
  char* entity_3;
  char entity_1[98] = "";
  entity_1 = NULL;
  entity_3 = (char*)malloc(20*sizeof(char));
  entity_3[20-1]='';
  memset(entity_1, 'd', 98-1);
  entity_1[98-1]='';
  memcpy(entity_3, entity_1, 98*sizeof(char));
}