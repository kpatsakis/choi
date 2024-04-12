void fun()
{
  char* entity_7;
  char* entity_2;
  char entity_9[68] = "";
  memset(entity_9, 'u', 68-1);
  entity_9[68-1]='0';
  entity_2 = (char*)malloc(97*sizeof(char));
  entity_2[0]='0';
  entity_7 = (char*)malloc(52*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_2, entity_9);
}