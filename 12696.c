void fun()
{
  int entity_6 = 88;
  char entity_4[92] = "";
  char* entity_5;
  memset(entity_4, 'Q', 92-1);
  entity_4[92-1]='0';
  entity_5 = (char*)malloc(entity_6*sizeof(char));
  entity_5[0]='0';
  strcpy(entity_5, entity_4);
}