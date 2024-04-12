void fun()
{
  int entity_7 = 24;
  char entity_8[92] = "";
  char entity_3[72] = "";
  char* entity_6;
  char entity_9 = 'x';
  memset(entity_8, 'd', 92-1);
  entity_8[92-1]='0';
  entity_6 = (char*)malloc(entity_7*sizeof(char));
  entity_6[0]='0';
  memset(entity_3, 'i', 72-1);
  entity_3[72-1]='0';
  memcpy(entity_6, entity_8, 92*sizeof(char));
}