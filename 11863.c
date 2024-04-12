void fun()
{
  char* entity_4;
  char entity_0 = 'b';
  char entity_6[82] = "";
  memset(entity_6, 'O', 82-1);
  entity_6[82-1]='0';
  entity_4 = (char*)malloc(44*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_6, 82*sizeof(char));
}