void fun()
{
  int entity_7 = 36;
  int entity_5 = 57;
  char* entity_3;
  char entity_8[94] = "";
  entity_3 = (char*)malloc(54*sizeof(char));
  entity_3[0]='0';
  memset(entity_8, 'M', 94-1);
  entity_8[94-1]='0';
  memcpy(entity_3, entity_8, 94*sizeof(char));
}