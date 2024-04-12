void fun()
{
  int entity_8 = 82;
  entity_8 = 5;
  char entity_7[21] = "";
  char* entity_2;
  memset(entity_7, 'Z', 21-1);
  entity_7[21-1]='0';
  entity_2 = (char*)malloc(entity_8*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_7, 21*sizeof(char));
}