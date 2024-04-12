void fun()
{
  int entity_6 = 32;
  char entity_1[59] = "";
  entity_1 = NULL;
  char* entity_7;
  char entity_2[29] = "";
  entity_2 = NULL;
  memset(entity_2, 'g', 29-1);
  entity_2[29-1]='';
  entity_7 = (char*)malloc(40*sizeof(char));
  entity_7[40-1]='';
  memset(entity_1, 'i', 59-1);
  entity_1[59-1]='';
  entity_1[entity_6] = 'M';
}