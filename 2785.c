void fun()
{
  int entity_4 = 60;
  char entity_9 = 'y';
  char entity_3[16] = "";
  entity_3 = NULL;
  char* entity_2;
  char entity_8[72] = "";
  entity_8 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(71*sizeof(char));
  entity_6[71-1]='';
  entity_2 = (char*)malloc(entity_4*sizeof(char));
  entity_2[entity_4-1]='';
  memset(entity_3, 'B', 16-1);
  entity_3[16-1]='';
  memset(entity_8, 'h', 72-1);
  entity_8[72-1]='';
  entity_4 = 61;
  memcpy(entity_2, entity_8, 72*sizeof(char));
}