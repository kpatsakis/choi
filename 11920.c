void fun()
{
  char* entity_9;
  char* entity_2;
  char entity_1[66] = "";
  entity_9 = (char*)malloc(51*sizeof(char));
  entity_9[0]='0';
  entity_2 = (char*)malloc(25*sizeof(char));
  entity_2[0]='0';
  memset(entity_1, 'o', 66-1);
  entity_1[66-1]='0';
  strcpy(entity_9, entity_1);
}