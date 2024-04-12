void fun()
{
  int entity_3 = 83;
  entity_3 = 83;
  char entity_4[entity_3] = "";
  char entity_1[27] = "";
  char* entity_2;
  memset(entity_4, 'M', entity_3-1);
  entity_4[entity_3-1]='0';
  memset(entity_1, 'H', 27-1);
  entity_1[27-1]='0';
  entity_2 = (char*)malloc(94*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_2, entity_4);
}