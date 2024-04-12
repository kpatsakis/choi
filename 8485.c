void fun()
{
  int entity_2 = 80;
  entity_2 = 2;
  char entity_0[6] = "";
  entity_0 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(entity_2*sizeof(char));
  entity_3[entity_2-1]='';
  memset(entity_0, 'e', 6-1);
  entity_0[6-1]='';
  memcpy(entity_3, entity_0, 6*sizeof(char));
}