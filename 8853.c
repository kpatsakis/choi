void fun()
{
  int entity_2 = 92;
  char entity_3[6] = "";
  entity_3 = NULL;
  char* entity_1;
  memset(entity_3, 'd', 6-1);
  entity_3[6-1]='';
  entity_1 = (char*)malloc(entity_2*sizeof(char));
  entity_1[entity_2-1]='';
  memcpy(entity_1, entity_3, 6*sizeof(char));
}