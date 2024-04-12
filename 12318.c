void fun()
{
  int entity_6 = 58;
  char* entity_2;
  char entity_5[9] = "";
  memset(entity_5, 'H', 9-1);
  entity_5[9-1]='0';
  entity_2 = (char*)malloc(entity_6*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_5, 9*sizeof(char));
}