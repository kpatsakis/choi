void fun()
{
  int entity_3 = 95;
  char entity_2[70] = "";
  char* entity_5;
  entity_5 = (char*)malloc(entity_3*sizeof(char));
  entity_5[0]='0';
  memset(entity_2, 'n', 70-1);
  entity_2[70-1]='0';
  entity_3 = 27;
  memcpy(entity_5, entity_2, 70*sizeof(char));
}