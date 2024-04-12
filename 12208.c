void fun()
{
  int entity_3 = 57;
  char entity_7[13] = "";
  char* entity_6;
  entity_6 = (char*)malloc(entity_3*sizeof(char));
  entity_6[0]='0';
  memset(entity_7, 'B', 13-1);
  entity_7[13-1]='0';
  memcpy(entity_6, entity_7, 13*sizeof(char));
}