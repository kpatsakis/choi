void fun()
{
  char entity_7[16] = "";
  char* entity_8;
  char* entity_5;
  entity_8 = (char*)malloc(83*sizeof(char));
  entity_8[0]='0';
  entity_5 = (char*)malloc(88*sizeof(char));
  entity_5[0]='0';
  memset(entity_7, 'D', 16-1);
  entity_7[16-1]='0';
  entity_7[72] = 'c';
}