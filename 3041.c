void fun()
{
  int entity_8 = 23;
  entity_8 = 68;
  char entity_3 = 'O';
  char* entity_6;
  char entity_9[21] = "";
  entity_9 = NULL;
  entity_6 = (char*)malloc(70*sizeof(char));
  entity_6[70-1]='';
  memset(entity_9, 'D', 21-1);
  entity_9[21-1]='';
  entity_9[entity_8] = 'o';
}