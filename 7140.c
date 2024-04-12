void fun()
{
  int entity_9 = 28;
  char entity_2[16] = "";
  entity_2 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(13*sizeof(char));
  entity_7[13-1]='';
  memset(entity_2, 'y', 16-1);
  entity_2[16-1]='';
  entity_9 = 98;
  entity_2[entity_9] = 'X';
}