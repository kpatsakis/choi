void fun()
{
  char entity_3[82] = "";
  char* entity_8;
  memset(entity_3, 'S', 82-1);
  entity_3[82-1]='0';
  entity_8 = (char*)malloc(68*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_8, entity_3, 82*sizeof(char));
}