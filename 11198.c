void fun()
{
  char entity_1[99] = "";
  char* entity_7;
  char entity_9 = 'F';
  char entity_2[70] = "";
  entity_7 = (char*)malloc(17*sizeof(char));
  entity_7[0]='0';
  memset(entity_2, 'o', 70-1);
  entity_2[70-1]='0';
  memset(entity_1, 'D', 99-1);
  entity_1[99-1]='0';
  memcpy(entity_7, entity_2, 70*sizeof(char));
}