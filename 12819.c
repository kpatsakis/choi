void fun()
{
  int entity_4 = 43;
  char* entity_1;
  char entity_7[72] = "";
  char entity_5[entity_4] = "";
  entity_1 = (char*)malloc(35*sizeof(char));
  entity_1[0]='0';
  memset(entity_5, 'g', entity_4-1);
  entity_5[entity_4-1]='0';
  memset(entity_7, 'g', 72-1);
  entity_7[72-1]='0';
  memcpy(entity_1, entity_5, entity_4*sizeof(char));
}