void fun()
{
  char entity_8 = 'K';
  char entity_1[82] = "";
  entity_1 = NULL;
  char entity_5[16] = "";
  entity_5 = NULL;
  char entity_9[79] = "";
  entity_9 = NULL;
  memset(entity_9, 'R', 79-1);
  entity_9[79-1]='';
  memset(entity_5, 'w', 16-1);
  entity_5[16-1]='';
  memset(entity_1, 'P', 82-1);
  entity_1[82-1]='';
  entity_9[52] = 'N';
}