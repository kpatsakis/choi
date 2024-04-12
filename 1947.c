void fun()
{
  int entity_9 = 15;
  char entity_7[40] = "";
  entity_7 = NULL;
  char entity_6 = 'i';
  char* entity_2;
  entity_2 = (char*)malloc(67*sizeof(char));
  entity_2[67-1]='';
  memset(entity_7, 'A', 40-1);
  entity_7[40-1]='';
  memcpy(entity_2, entity_7, 40*sizeof(char));
}