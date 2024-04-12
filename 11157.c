void fun()
{
  char entity_5[68] = "";
  char* entity_7;
  char* entity_1;
  entity_1 = (char*)malloc(62*sizeof(char));
  entity_1[0]='0';
  entity_7 = (char*)malloc(19*sizeof(char));
  entity_7[0]='0';
  memset(entity_5, 'x', 68-1);
  entity_5[68-1]='0';
  memcpy(entity_1, entity_5, 68*sizeof(char));
}