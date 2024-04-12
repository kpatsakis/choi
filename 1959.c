void fun()
{
  int entity_3 = 8;
  int entity_6 = 14;
  char* entity_2;
  char entity_1[10] = "";
  entity_1 = NULL;
  memset(entity_1, 'L', 10-1);
  entity_1[10-1]='';
  entity_2 = (char*)malloc(entity_6*sizeof(char));
  entity_2[entity_6-1]='';
  entity_6 = 29;
  memcpy(entity_2, entity_1, 10*sizeof(char));
}