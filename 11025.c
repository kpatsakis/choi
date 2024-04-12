void fun()
{
  int entity_7 = 85;
  char entity_1[82] = "";
  char* entity_6;
  char entity_8 = 's';
  entity_6 = (char*)malloc(96*sizeof(char));
  entity_6[0]='0';
  memset(entity_1, 'S', 82-1);
  entity_1[82-1]='0';
  memcpy(entity_6, entity_1, 82*sizeof(char));
}