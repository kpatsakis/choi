void fun()
{
  int entity_6 = 18;
  char* entity_2;
  char entity_4[70] = "";
  entity_2 = (char*)malloc(entity_6*sizeof(char));
  entity_2[0]='0';
  memset(entity_4, 'n', 70-1);
  entity_4[70-1]='0';
  entity_6 = 89;
  strcpy(entity_2, entity_4);
}