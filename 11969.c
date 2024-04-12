void fun()
{
  char* entity_7;
  char entity_3[87] = "";
  char entity_1 = 's';
  memset(entity_3, 'J', 87-1);
  entity_3[87-1]='0';
  entity_7 = (char*)malloc(62*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_7, entity_3, 87*sizeof(char));
}