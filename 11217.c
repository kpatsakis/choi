void fun()
{
  int entity_6 = 6;
  char entity_7[10] = "";
  char entity_3[72] = "";
  char* entity_1;
  memset(entity_3, 'I', 72-1);
  entity_3[72-1]='0';
  entity_1 = (char*)malloc(96*sizeof(char));
  entity_1[0]='0';
  memset(entity_7, 'g', 10-1);
  entity_7[10-1]='0';
  memcpy(entity_1, entity_7, 10*sizeof(char));
}