void fun()
{
  char* entity_4;
  char* entity_8;
  char entity_5[70] = "";
  memset(entity_5, 'r', 70-1);
  entity_5[70-1]='0';
  entity_4 = (char*)malloc(76*sizeof(char));
  entity_4[0]='0';
  entity_8 = (char*)malloc(31*sizeof(char));
  entity_8[0]='0';
  entity_5[79] = 'W';
}