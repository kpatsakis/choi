void fun()
{
  int entity_8 = 49;
  entity_8 = 6;
  char entity_7[16] = "";
  entity_7 = NULL;
  char* entity_4;
  memset(entity_7, 'g', 16-1);
  entity_7[16-1]='';
  entity_4 = (char*)malloc(95*sizeof(char));
  entity_4[95-1]='';
  entity_7[entity_8] = 'B';
}