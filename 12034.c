void fun()
{
  int entity_2 = 23;
  char* entity_1;
  char entity_8 = 'z';
  char entity_4[100] = "";
  entity_1 = (char*)malloc(entity_2*sizeof(char));
  entity_1[0]='0';
  memset(entity_4, 'F', 100-1);
  entity_4[100-1]='0';
  strcpy(entity_1, entity_4);
}