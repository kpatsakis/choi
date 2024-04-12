void fun()
{
  char* entity_6;
  char entity_0[98] = "";
  entity_6 = (char*)malloc(92*sizeof(char));
  entity_6[0]='0';
  memset(entity_0, 'o', 98-1);
  entity_0[98-1]='0';
  memcpy(entity_6, entity_0, 98*sizeof(char));
}