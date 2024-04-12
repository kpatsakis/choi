void fun()
{
  int entity_4 = 30;
  char entity_1[40] = "";
  entity_1 = NULL;
  char entity_7 = 'P';
  char* entity_6;
  memset(entity_1, 'p', 40-1);
  entity_1[40-1]='';
  entity_6 = (char*)malloc(70*sizeof(char));
  entity_6[70-1]='';
  memcpy(entity_6, entity_1, 40*sizeof(char));
}