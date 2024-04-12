void fun()
{
  char entity_9[21] = "";
  char* entity_8;
  memset(entity_9, 'z', 21-1);
  entity_9[21-1]='0';
  entity_8 = (char*)malloc(94*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_8, entity_9, 21*sizeof(char));
}