void fun()
{
  int entity_3 = 45;
  int entity_2 = 43;
  char entity_1[83] = "";
  entity_1 = NULL;
  char* entity_6;
  memset(entity_1, 's', 83-1);
  entity_1[83-1]='';
  entity_6 = (char*)malloc(entity_2*sizeof(char));
  entity_6[entity_2-1]='';
  memcpy(entity_6, entity_1, 83*sizeof(char));
}