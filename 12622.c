void fun()
{
  int entity_6 = 43;
  int entity_0 = 76;
  char* entity_2;
  char entity_3[74] = "";
  entity_2 = (char*)malloc(entity_6*sizeof(char));
  entity_2[0]='0';
  memset(entity_3, 'r', 74-1);
  entity_3[74-1]='0';
  strcpy(entity_2, entity_3);
}