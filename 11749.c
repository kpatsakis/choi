void fun()
{
  char entity_4[87] = "";
  char* entity_7;
  memset(entity_4, 'r', 87-1);
  entity_4[87-1]='0';
  entity_7 = (char*)malloc(1*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_7, entity_4, 87*sizeof(char));
}