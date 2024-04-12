void fun()
{
  int entity_1 = 96;
  char* entity_2;
  char entity_3[61] = "";
  entity_3 = NULL;
  entity_2 = (char*)malloc(entity_1*sizeof(char));
  entity_2[entity_1-1]='';
  memset(entity_3, 'P', 61-1);
  entity_3[61-1]='';
  entity_1 = 20;
  memcpy(entity_2, entity_3, 61*sizeof(char));
}