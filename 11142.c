void fun()
{
  char entity_3[70] = "";
  char* entity_1;
  entity_1 = (char*)malloc(21*sizeof(char));
  entity_1[0]='0';
  memset(entity_3, 'u', 70-1);
  entity_3[70-1]='0';
  memcpy(entity_1, entity_3, 70*sizeof(char));
}