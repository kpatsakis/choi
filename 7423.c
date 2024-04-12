void fun()
{
  int entity_6 = 53;
  char entity_1[20] = "";
  entity_1 = NULL;
  char* entity_3;
  char entity_7 = 'O';
  memset(entity_1, 'g', 20-1);
  entity_1[20-1]='';
  entity_3 = (char*)malloc(entity_6*sizeof(char));
  entity_3[entity_6-1]='';
  memcpy(entity_3, entity_1, 20*sizeof(char));
}