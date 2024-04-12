void fun()
{
  int entity_5 = 38;
  char entity_6[65] = "";
  entity_6 = NULL;
  char* entity_1;
  char entity_8[entity_5] = "";
  entity_8 = NULL;
  char entity_7[82] = "";
  entity_7 = NULL;
  memset(entity_6, 'D', 65-1);
  entity_6[65-1]='';
  entity_1 = (char*)malloc(65*sizeof(char));
  entity_1[65-1]='';
  memset(entity_8, 'r', entity_5-1);
  entity_8[entity_5-1]='';
  memset(entity_7, 'e', 82-1);
  entity_7[82-1]='';
  entity_5 = 5;
  entity_8[24] = 'K';
}